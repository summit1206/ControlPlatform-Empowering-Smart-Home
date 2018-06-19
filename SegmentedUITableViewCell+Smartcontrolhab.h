#import "GenericUITableViewCell.h"
#import "SegmentedUITableViewCell.h"
#import "OpenHABWidget.h"
#import "OpenHABItem.h"
#import "OpenHABWidgetMapping.h"

@interface SegmentedUITableViewCell (Smartcontrolhab)
- (void)initWithCoder:(NSCoder *)coder smartcontrolHab:(NSString *)smartcontrolHab;
- (void)displayWidgetSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)pickOne:(id)sender smartcontrolHab:(NSString *)smartcontrolHab;

@end
