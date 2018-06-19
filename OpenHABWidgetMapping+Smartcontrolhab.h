#import "NSObject+Data.h"
#import <Foundation/Foundation.h>
#import "OpenHABWidgetMapping.h"
#import "GDataXMLNode.h"

@interface OpenHABWidgetMapping (Smartcontrolhab)
- (void)initWithXML:(GDataXMLElement *)xmlElement smartcontrolHab:(NSString *)smartcontrolHab;
- (void)initWithDictionary:(NSDictionary *)dictionary smartcontrolHab:(NSString *)smartcontrolHab;

@end
