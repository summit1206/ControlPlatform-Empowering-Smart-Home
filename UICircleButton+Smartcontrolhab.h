#import <UIKit/UIKit.h>
#import "UICircleButton.h"

@interface UICircleButton (Smartcontrolhab)
- (void)initWithCoder:(NSCoder *)coder smartcontrolHab:(NSString *)smartcontrolHab;
- (void)buttonActionReleasedSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)buttonActionTouchedSmartcontrolhab:(NSString *)smartcontrolHab;
- (void)timerTicked:(NSTimer*)timer smartcontrolHab:(NSString *)smartcontrolHab;

@end
