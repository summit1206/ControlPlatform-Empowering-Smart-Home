//
//  OpenHABInfoViewController.m
//  openHAB
//
//  Created by Victor Belov on 27/05/14.
//  Copyright (c) 2014 Victor Belov. All rights reserved.
//

#import "OpenHABInfoViewController.h"
#import <MessageUI/MessageUI.h>
@interface OpenHABInfoViewController ()<MFMailComposeViewControllerDelegate>

@property (strong, nonatomic) MFMailComposeViewController *mailPicker;
@end

@implementation OpenHABInfoViewController
@synthesize appVersionLabel, openHABVersionLabel, openHABUUIDLabel, openHABSecretLabel;

- (void)viewDidLoad
{
    [super viewDidLoad];
//    [self.tabledataview setTableFooterView:[UIView alloc]];
//    [self.tabledataview setTableHeaderView:[UIView alloc]];
    NSString * appBuildString = [[NSBundle mainBundle] objectForInfoDictionaryKey:@"CFBundleVersion"];
    NSString * appVersionString = [[NSBundle mainBundle] objectForInfoDictionaryKey:@"CFBundleShortVersionString"];
    NSString * versionBuildString = [NSString stringWithFormat:@"%@ (%@)", appVersionString, appBuildString];
    appVersionLabel.text = versionBuildString;
    openHABVersionLabel.text = @"suggestions";
    openHABUUIDLabel.text = @"source code";
    openHABSecretLabel.text = @"source code";
}

- (void) viewWillAppear:(BOOL)animated
{
    [super viewDidAppear:animated];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
-(void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    [tableView deselectRowAtIndexPath:indexPath animated:YES];
    if(indexPath.row == 1)
    {
        if ([MFMailComposeViewController canSendMail])
        {
        MFMailComposeViewController *mailPicker = [[MFMailComposeViewController alloc] init];     //controller
        
        mailPicker.mailComposeDelegate = self;  //
        
        [mailPicker setSubject:@"Feedback"]; //
        
        [mailPicker setToRecipients:[NSArray arrayWithObjects:@"a979d9@yeah.net",nil]];
        
        [mailPicker setMessageBody:@"Advice" isHTML:NO];     //邮件主题
        
        
//        [self presentModalViewController:mailPicker animated:YES];   //
        [self presentViewController:mailPicker animated:YES completion:nil];
        }
        else
        {
            UIAlertController *alert = [UIAlertController alertControllerWithTitle:nil message:@"Please log in to your email account. " preferredStyle:UIAlertControllerStyleAlert];
            UIAlertAction *actionsure = [UIAlertAction actionWithTitle:@"OK" style:UIAlertActionStyleDefault handler:nil];
            [alert addAction:actionsure];
            [self presentViewController:alert animated:YES completion:nil];
        }
    }else if (indexPath.row ==2)
    {
        NSURL *urlweb = [NSURL URLWithString:@"https://github.com/summit1206/ControlPlatform-Empowering-Smart-Home"];
        [[UIApplication sharedApplication] openURL:urlweb];
        
    }else
        return ;
}
- (void)mailComposeController:(MFMailComposeViewController*)controller
          didFinishWithResult:(MFMailComposeResult)result

                        error:(NSError*)error

{
    
    switch (result){
            
        case MFMailComposeResultCancelled:  NSLog(@"Mail send canceled…");
            
            break;
            
        case MFMailComposeResultSaved:    NSLog(@"Mail saved…");
            
            break;
            
        case MFMailComposeResultSent:             NSLog(@"Mail sent…");
            
            break;
            
        case MFMailComposeResultFailed:  NSLog(@"Mail send errored: %@…", [error localizedDescription]);
            
            break;
            
        default:             break;
            
    }
    
//    [self dismissModalViewControllerAnimated:YES];
    [self dismissViewControllerAnimated:YES completion:nil];
}
- (void)loadOpenHABInfo
{
/*    NSURL *pageToLoadUrl = [[NSURL alloc] initWithString:self.pageUrl];
    NSMutableURLRequest *pageRequest = [NSMutableURLRequest requestWithURL:pageToLoadUrl];
    [pageRequest setAuthCredentials:self.openHABUsername :self.openHABPassword];
    currentPageOperation = [[AFHTTPRequestOperation alloc] initWithRequest:pageRequest];
    if (self.ignoreSSLCertificate) {
        NSLog(@"Warning - ignoring invalid certificates");
        currentPageOperation.securityPolicy.allowInvalidCertificates = YES;
    }
    [currentPageOperation setCompletionBlockWithSuccess:^(AFHTTPRequestOperation *operation, id responseObject) {
        NSData *response = (NSData*)responseObject;
        NSError *error;
    } failure:^(AFHTTPRequestOperation *operation, NSError *error){
        NSLog(@"Error:------>%@", [error description]);
        NSLog(@"error code %ld",(long)[operation.response statusCode]);
    }];
    [currentPageOperation start];
*/
}

@end
