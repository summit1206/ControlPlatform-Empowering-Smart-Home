#import "OpenHABLinkedPage+Smartcontrolhab.h"
@implementation OpenHABLinkedPage (Smartcontrolhab)
- (void)initWithXML:(GDataXMLElement *)xmlElement smartcontrolHab:(NSString *)smartcontrolHab {
    NSLog(@"%@", smartcontrolHab);
}
- (void)initWithDictionary:(NSDictionary *)dictionary smartcontrolHab:(NSString *)smartcontrolHab {
    NSLog(@"%@", smartcontrolHab);
}

@end
