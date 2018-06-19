#import <UIKit/UIKit.h>
#import "OpenHABItem.h"
#import "OpenHABSelectionTableViewController.h"
#import "OpenHABWidgetMapping.h"

@interface OpenHABSelectionTableViewController (Smartcontrolhab)
- (void)initWithStyle:(UITableViewStyle)style smartcontrolHab:(NSString *)smartcontrolHab;
- (void)viewDidLoadSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)didReceiveMemoryWarningSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)numberOfSectionsInTableView:(UITableView *)tableView smartcontrolHab:(NSString *)smartcontrolHab;
- (void)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section smartcontrolHab:(NSString *)smartcontrolHab;
- (void)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath smartcontrolHab:(NSString *)smartcontrolHab;
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath smartcontrolHab:(NSString *)smartcontrolHab;

@end
