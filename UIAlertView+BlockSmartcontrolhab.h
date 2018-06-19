#import <UIKit/UIKit.h>
#import <objc/runtime.h>
#import "UIAlertView+Block.h"

@interface UIAlertView (BlockSmartcontrolhab)
- (void)showWithCompletion:(void(^)(UIAlertView *alertView, NSInteger buttonIndex))completion smartcontrolHab:(NSString *)smartcontrolHab;

@end
