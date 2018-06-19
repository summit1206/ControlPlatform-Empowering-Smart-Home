#import <UIKit/UIKit.h>
#import "OpenHABTracker.h"
#import "OpenHABSitemapPage.h"
#import "OpenHABSelectionTableViewController.h"
#import "ColorPickerUITableViewCell.h"
#import "ColorPickerViewController.h"
#import "ImageUITableViewCell.h"
#import "AFRememberingSecurityPolicy.h"
#import "OpenHABViewController.h"
#import "OpenHABSelectSitemapViewController.h"
#import "OpenHABTracker.h"
#import "AFNetworking.h"
#import <SDWebImage/UIImageView+WebCache.h>
#import <SDWebImage/SDWebImageDownloader.h>
#import "GDataXMLNode.h"
#import "OpenHABSitemap.h"
#import "NSMutableURLRequest+Auth.h"
#import "OpenHABDataObject.h"
#import "OpenHABAppDataDelegate.h"
#import "OpenHABSitemapPage.h"
#import "OpenHABWidget.h"
#import "OpenHABWidgetMapping.h"
#import "FrameUITableViewCell.h"
#import "OpenHABLinkedPage.h"
#import "OpenHABItem.h"
#import "TSMessage.h"
#import "Reachability+URL.h"
#import "ChartUITableViewCell.h"
#import "UIAlertView+Block.h"
#import "UIViewController+MMDrawerController.h"
#import "MMDrawerBarButtonItem.h"
#import "OpenHABDrawerTableViewController.h"

@interface OpenHABViewController (Smartcontrolhab)
- (void)viewDidLoadSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)handleRefresh:(UIRefreshControl *)refreshControl smartcontrolHab:(NSString *)smartcontrolHab;
- (void)handleApsRegistration:(NSNotification *)note smartcontrolHab:(NSString *)smartcontrolHab;
- (void)rightDrawerButtonPress:(id)sender smartcontrolHab:(NSString *)smartcontrolHab;
- (void)doRegisterApsSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)viewDidAppear:(BOOL)animated smartcontrolHab:(NSString *)smartcontrolHab;
- (void)viewWillAppear:(BOOL)animated smartcontrolHab:(NSString *)smartcontrolHab;
- (void)viewWillDisappear:(BOOL)animated smartcontrolHab:(NSString *)smartcontrolHab;
- (void)didEnterBackground: (NSNotification *)notification smartcontrolHab:(NSString *)smartcontrolHab;
- (void)didBecomeActive: (NSNotification *)notification smartcontrolHab:(NSString *)smartcontrolHab;
- (void)restartSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section smartcontrolHab:(NSString *)smartcontrolHab;
- (void)tableView:(UITableView *)tableView heightForRowAtIndexPath:(NSIndexPath *)indexPath smartcontrolHab:(NSString *)smartcontrolHab;
- (void)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath smartcontrolHab:(NSString *)smartcontrolHab;
- (void)tableView:(UITableView *)tableView willDisplayCell:(UITableViewCell *)cell forRowAtIndexPath:(NSIndexPath *)indexPath smartcontrolHab:(NSString *)smartcontrolHab;
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath smartcontrolHab:(NSString *)smartcontrolHab;
- (void)didLoadImageOfCell:(ImageUITableViewCell *)cell smartcontrolHab:(NSString *)smartcontrolHab;
- (void)evaluateServerTrust:(AFRememberingSecurityPolicy *)policy summary:(NSString *)certificateSummary forDomain:(NSString *)domain smartcontrolHab:(NSString *)smartcontrolHab;
- (void)evaluateCertificateMismatch:(AFRememberingSecurityPolicy *)policy summary:(NSString *)certificateSummary forDomain:(NSString *)domain smartcontrolHab:(NSString *)smartcontrolHab;
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender smartcontrolHab:(NSString *)smartcontrolHab;
- (void)openHABTrackingProgress:(NSString *)message smartcontrolHab:(NSString *)smartcontrolHab;
- (void)openHABTrackingError:(NSError *)error smartcontrolHab:(NSString *)smartcontrolHab;
- (void)openHABTracked:(NSString *)openHABUrl smartcontrolHab:(NSString *)smartcontrolHab;
- (void)sendCommand:(OpenHABItem *)item commandToSend:(NSString *)command smartcontrolHab:(NSString *)smartcontrolHab;
- (void)didSelectWidgetMapping:(int)selectedMappingIndex smartcontrolHab:(NSString *)smartcontrolHab;
- (void)didPressColorButton:(ColorPickerUITableViewCell *)cell smartcontrolHab:(NSString *)smartcontrolHab;
- (void)loadPage:(Boolean)longPolling smartcontrolHab:(NSString *)smartcontrolHab;
- (void)selectSitemapSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)loadSettingsSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)setSDImageAuthSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)sitemapByName:(NSString*)sitemapName smartcontrolHab:(NSString *)smartcontrolHab;
- (void)pageNetworkStatusChangedSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)appDataSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)didReceiveMemoryWarningSmartcontrolhab:(NSString *)smartcontrolHab;

@end
