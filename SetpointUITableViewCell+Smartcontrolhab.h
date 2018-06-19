#import "GenericUITableViewCell.h"
#import "SetpointUITableViewCell.h"
#import "OpenHABWidget.h"
#import "OpenHABItem.h"

@interface SetpointUITableViewCell (Smartcontrolhab)
- (void)initWithCoder:(NSCoder *)coder smartcontrolHab:(NSString *)smartcontrolHab;
- (void)displayWidgetSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)decreaseValueSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)increaseValueSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)pickOne:(id)sender smartcontrolHab:(NSString *)smartcontrolHab;
- (void)stateFormatSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)isIntStepSmartcontrolhab:(NSString *)smartcontrolHab;

@end
