#import <UIKit/UIKit.h>
#import "OpenHABSelectSitemapViewController.h"
#import "OpenHABViewController.h"
#import "OpenHABSitemap.h"
#import <SDWebImage/UIImageView+WebCache.h>
#import <SDWebImage/SDWebImageDownloader.h>
#import "OpenHABAppDataDelegate.h"
#import "OpenHABDataObject.h"
#import "AFNetworking.h"
#import "NSMutableURLRequest+Auth.h"
#import "GDataXMLNode.h"
#import "AFRememberingSecurityPolicy.h"

@interface OpenHABSelectSitemapViewController (Smartcontrolhab)
- (void)initWithStyle:(UITableViewStyle)style smartcontrolHab:(NSString *)smartcontrolHab;
- (void)viewDidLoadSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)viewWillAppear:(BOOL)animated smartcontrolHab:(NSString *)smartcontrolHab;
- (void)viewDidAppear:(BOOL)animated smartcontrolHab:(NSString *)smartcontrolHab;
- (void)didReceiveMemoryWarningSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section smartcontrolHab:(NSString *)smartcontrolHab;
- (void)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath smartcontrolHab:(NSString *)smartcontrolHab;
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath smartcontrolHab:(NSString *)smartcontrolHab;
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender smartcontrolHab:(NSString *)smartcontrolHab;
- (void)appDataSmartcontrolhab:(NSString *)smartcontrolHab;

@end
