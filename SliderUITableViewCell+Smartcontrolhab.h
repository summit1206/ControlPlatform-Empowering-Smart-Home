#import "GenericUITableViewCell.h"
#import "SliderUITableViewCell.h"
#import "OpenHABWidget.h"
#import "OpenHABItem.h"

@interface SliderUITableViewCell (Smartcontrolhab)
- (void)initWithCoder:(NSCoder *)coder smartcontrolHab:(NSString *)smartcontrolHab;
- (void)displayWidgetSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)sliderDidEndSliding:(NSNotification *)notification smartcontrolHab:(NSString *)smartcontrolHab;

@end
