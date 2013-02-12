/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray;

@interface UIInputSwitcherShadowView : UIView {
    NSArray *m_gradientColors;
    int m_mode;
    float m_pointerOffset;
}

@property(retain) NSArray * gradientColors;
@property int mode;
@property float pointerOffset;

- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)gradientColors;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)mode;
- (float)pointerOffset;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setGradientColors:(id)arg1;
- (void)setMode:(int)arg1;
- (void)setPointerOffset:(float)arg1;

@end