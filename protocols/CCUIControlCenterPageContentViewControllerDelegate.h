/* Generated by RuntimeBrowser.
 */

@protocol CCUIControlCenterPageContentViewControllerDelegate <NSObject>

@required

- (void)beginSuppressingPunchOutMaskCachingForReason:(NSString *)arg1;
- (void)contentViewControllerWantsDismissal:(UIViewController<CCUIControlCenterPageContentProviding> *)arg1;
- (<CCUIControlCenterSystemAgent> *)controlCenterSystemAgent;
- (void)endSuppressingPunchOutMaskCachingForReason:(NSString *)arg1;
- (int)layoutStyle;
- (void)visibilityPreferenceChangedForContentViewController:(UIViewController<CCUIControlCenterPageContentProviding> *)arg1;

@end
