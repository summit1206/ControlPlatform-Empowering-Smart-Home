#import "NSObject+Data.h"
#import <Foundation/Foundation.h>
#import "OpenHABWidget.h"
#import "OpenHABItem.h"
#import "OpenHABLinkedPage.h"
#import "GDataXMLNode.h"
#import "OpenHABWidgetMapping.h"

@interface OpenHABWidget (Smartcontrolhab)
- (void)initWithXML:(GDataXMLElement *)xmlElement smartcontrolHab:(NSString *)smartcontrolHab;
- (void)initWithDictionary:(NSDictionary *)dictionary smartcontrolHab:(NSString *)smartcontrolHab;
- (void)labelTextSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)labelValueSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)mappingIndexByCommand:(NSString *)command smartcontrolHab:(NSString *)smartcontrolHab;
- (void)sendCommand:(NSString *)command smartcontrolHab:(NSString *)smartcontrolHab;

@end
