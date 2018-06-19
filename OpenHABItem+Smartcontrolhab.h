#import "NSObject+Data.h"
#import <Foundation/Foundation.h>
#import "OpenHABItem.h"
#import "GDataXMLNode.h"

@interface OpenHABItem (Smartcontrolhab)
- (void)initWithXML:(GDataXMLElement *)xmlElement smartcontrolHab:(NSString *)smartcontrolHab;
- (void)initWithDictionary:(NSDictionary *)dictionary smartcontrolHab:(NSString *)smartcontrolHab;
- (void)stateAsFloatSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)stateAsIntSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)stateAsUIColorSmartcontrolhab:(NSString *)smartcontrolHab;

@end
