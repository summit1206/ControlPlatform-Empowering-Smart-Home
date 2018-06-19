#import <UIKit/UIKit.h>
#import "OpenHABAppDelegate.h"
#import "OpenHABSettingsViewController.h"
#import "OpenHABViewController.h"
#import "OpenHABDataObject.h"
#import <SDWebImage/UIImageView+WebCache.h>

@interface OpenHABSettingsViewController (Smartcontrolhab)
- (void)initWithStyle:(UITableViewStyle)style smartcontrolHab:(NSString *)smartcontrolHab;
- (void)viewDidLoadSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)viewWillAppear:(BOOL)animated smartcontrolHab:(NSString *)smartcontrolHab;
- (void)textFieldShouldReturn:(UITextField *)textField smartcontrolHab:(NSString *)smartcontrolHab;
- (void)cancelButtonPressed:(id)sender smartcontrolHab:(NSString *)smartcontrolHab;
- (void)saveButtonPressed:(id)sender smartcontrolHab:(NSString *)smartcontrolHab;
- (void)demomodeSwitchChange:(id)sender smartcontrolHab:(NSString *)smartcontrolHab;
- (void)tableView:(UITableView*)tableView numberOfRowsInSection:(NSInteger)section smartcontrolHab:(NSString *)smartcontrolHab;
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath smartcontrolHab:(NSString *)smartcontrolHab;
- (void)enableConnectionSettingsSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)disableConnectionSettingsSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)didReceiveMemoryWarningSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender smartcontrolHab:(NSString *)smartcontrolHab;
- (void)updateSettingsUiSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)loadSettingsSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)updateSettingsSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)saveSettingsSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)appDataSmartcontrolhab:(NSString *)smartcontrolHab;

@end
