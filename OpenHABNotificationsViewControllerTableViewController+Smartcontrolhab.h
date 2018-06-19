#import <UIKit/UIKit.h>
#import "OpenHABNotificationsViewControllerTableViewController.h"
#import "OpenHABAppDataDelegate.h"
#import "OpenHABDataObject.h"
#import "NSMutableURLRequest+Auth.h"
#import "AFNetworking.h"
#import "AFRememberingSecurityPolicy.h"
#import "OpenHABNotification.h"
#import "NSDate+Helper.h"
#import <SDWebImage/UIImageView+WebCache.h>
#import <SDWebImage/SDWebImageDownloader.h>
#import "UIViewController+MMDrawerController.h"
#import "MMDrawerBarButtonItem.h"
#import "OpenHABDrawerTableViewController.h"
#import "NotificationTableViewCell.h"

@interface OpenHABNotificationsViewControllerTableViewController (Smartcontrolhab)
- (void)viewDidLoadSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)didReceiveMemoryWarningSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)viewWillAppear:(BOOL)animated smartcontrolHab:(NSString *)smartcontrolHab;
- (void)loadNotificationsSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)handleRefresh:(UIRefreshControl *)refreshControl smartcontrolHab:(NSString *)smartcontrolHab;
- (void)rightDrawerButtonPress:(id)sender smartcontrolHab:(NSString *)smartcontrolHab;
- (void)numberOfSectionsInTableView:(UITableView *)tableView smartcontrolHab:(NSString *)smartcontrolHab;
- (void)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section smartcontrolHab:(NSString *)smartcontrolHab;
- (void)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath smartcontrolHab:(NSString *)smartcontrolHab;
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath smartcontrolHab:(NSString *)smartcontrolHab;
- (void)loadSettingsSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)appDataSmartcontrolhab:(NSString *)smartcontrolHab;

@end
