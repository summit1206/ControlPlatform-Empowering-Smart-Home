#import <UIKit/UIKit.h>
#import "OpenHABInfoViewController.h"
#import <MessageUI/MessageUI.h>

@interface OpenHABInfoViewController (Smartcontrolhab)
- (void)viewDidLoadSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)viewWillAppear:(BOOL)animated smartcontrolHab:(NSString *)smartcontrolHab;
- (void)didReceiveMemoryWarningSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath smartcontrolHab:(NSString *)smartcontrolHab;
- (void)mailComposeController:(MFMailComposeViewController*)controller
          didFinishWithResult:(MFMailComposeResult)result

                        error:(NSError*)error smartcontrolHab:(NSString *)smartcontrolHab;
- (void)loadOpenHABInfoSmartcontrolhab:(NSString *)smartcontrolHab;

@end
