#import "NSObject+Data.h"
#import <Foundation/Foundation.h>
#import "OpenHABNotification.h"

@interface OpenHABNotification (Smartcontrolhab)
- (void)initWithDictionary:(NSDictionary *)dictionary smartcontrolHab:(NSString *)smartcontrolHab;

@end
