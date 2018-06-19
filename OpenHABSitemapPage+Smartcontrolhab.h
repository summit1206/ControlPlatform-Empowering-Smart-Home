#import "NSObject+Data.h"
#import <Foundation/Foundation.h>
#import "OpenHABWidget.h"
#import "OpenHABItem.h"
#import "OpenHABSitemapPage.h"
#import "GDataXMLNode.h"
#import "OpenHABWidget.h"

@interface OpenHABSitemapPage (Smartcontrolhab)
- (void)initWithXML:(GDataXMLElement *)xmlElement smartcontrolHab:(NSString *)smartcontrolHab;
- (void)initWithDictionary:(NSDictionary *)dictionary smartcontrolHab:(NSString *)smartcontrolHab;
- (void)sendCommand:(OpenHABItem *)item commandToSend:(NSString *)command smartcontrolHab:(NSString *)smartcontrolHab;

@end
