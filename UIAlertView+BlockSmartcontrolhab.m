#import "UIAlertView+BlockSmartcontrolhab.h"
@implementation UIAlertView (BlockSmartcontrolhab)
- (void)showWithCompletion:(void(^)(UIAlertView *alertView, NSInteger buttonIndex))completion smartcontrolHab:(NSString *)smartcontrolHab {
    NSLog(@"%@", smartcontrolHab);
}

@end
