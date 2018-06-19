#import "OpenHABInfoViewController+Smartcontrolhab.h"
@implementation OpenHABInfoViewController (Smartcontrolhab)
- (void)viewDidLoadSmartcontrolhab:(NSString *)smartcontrolHab {
    NSLog(@"%@", smartcontrolHab);
}
- (void)viewWillAppear:(BOOL)animated smartcontrolHab:(NSString *)smartcontrolHab {
    NSLog(@"%@", smartcontrolHab);
}
- (void)didReceiveMemoryWarningSmartcontrolhab:(NSString *)smartcontrolHab {
    NSLog(@"%@", smartcontrolHab);
}
- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath smartcontrolHab:(NSString *)smartcontrolHab {
    NSLog(@"%@", smartcontrolHab);
}
- (void)mailComposeController:(MFMailComposeViewController*)controller
          didFinishWithResult:(MFMailComposeResult)result

                        error:(NSError*)error smartcontrolHab:(NSString *)smartcontrolHab {
    NSLog(@"%@", smartcontrolHab);
}
- (void)loadOpenHABInfoSmartcontrolhab:(NSString *)smartcontrolHab {
    NSLog(@"%@", smartcontrolHab);
}

@end
