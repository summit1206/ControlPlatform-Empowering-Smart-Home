#import "Reachability.h"
#import "Reachability+URL.h"

@interface Reachability (URLSmartcontrolhab)
+ (void)reachabilityWithUrlString:(NSString *)urlString smartcontrolHab:(NSString *)smartcontrolHab;
+ (void)reachabilityWithUrl:(NSURL *)url smartcontrolHab:(NSString *)smartcontrolHab;
- (void)currentlyReachableSmartcontrolhab:(NSString *)smartcontrolHab;

@end
