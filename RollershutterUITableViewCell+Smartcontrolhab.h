#import "GenericUITableViewCell.h"
#import "RollershutterUITableViewCell.h"
#import <QuartzCore/QuartzCore.h>
#import "OpenHABWidget.h"

@interface RollershutterUITableViewCell (Smartcontrolhab)
- (void)initWithCoder:(NSCoder *)coder smartcontrolHab:(NSString *)smartcontrolHab;
- (void)upButtonPressedSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)stopButtonPressedSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)downButtonPressedSmartcontrolhab:(NSString *)smartcontrolHab;

@end
