#import "GenericUITableViewCell.h"
#import "SelectionUITableViewCell.h"
#import "OpenHABWidget.h"
#import "OpenHABItem.h"
#import "OpenHABWidgetMapping.h"

@interface SelectionUITableViewCell (Smartcontrolhab)
- (void)loadWidget:(OpenHABWidget *)widgetToLoad smartcontrolHab:(NSString *)smartcontrolHab;
- (void)displayWidgetSmartcontrolhab:(NSString *)smartcontrolHab;

@end
