#import "NSObject+Data.h"
#import <Foundation/Foundation.h>
#import "OpenHABLinkedPage.h"
#import "GDataXMLNode.h"

@interface OpenHABLinkedPage (Smartcontrolhab)
- (void)initWithXML:(GDataXMLElement *)xmlElement smartcontrolHab:(NSString *)smartcontrolHab;
- (void)initWithDictionary:(NSDictionary *)dictionary smartcontrolHab:(NSString *)smartcontrolHab;

@end
