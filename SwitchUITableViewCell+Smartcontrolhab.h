#import "GenericUITableViewCell.h"
#import "SwitchUITableViewCell.h"
#import "OpenHABWidget.h"
#import "OpenHABItem.h"

@interface SwitchUITableViewCell (Smartcontrolhab)
- (void)initWithCoder:(NSCoder *)coder smartcontrolHab:(NSString *)smartcontrolHab;
- (void)displayWidgetSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)switchChange:(id)sender smartcontrolHab:(NSString *)smartcontrolHab;

@end
