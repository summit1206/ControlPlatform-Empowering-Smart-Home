#import "NSObject+Data.h"
#import <Foundation/Foundation.h>
#import "OpenHABSitemap.h"
#import "GDataXMLNode.h"

@interface OpenHABSitemap (Smartcontrolhab)
- (void)initWithXML:(GDataXMLElement *)xmlElement smartcontrolHab:(NSString *)smartcontrolHab;
- (void)initWithDictionaty:(NSDictionary *)dictionary smartcontrolHab:(NSString *)smartcontrolHab;

@end
