/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImage, UITextInputTraits;



@interface UIKeyboard : UIView 
{
    UIImage *m_snapshot;
    UITextInputTraits *m_defaultTraits;
    BOOL m_typingDisabled;
}

+ (id)activeKeyboard;
+ (void)initImplementationNow;
+ (void)removeAllDynamicDictionaries;
+ (struct CGSize { float x1; float x2; })defaultSize;
+ (struct CGSize { float x1; float x2; })defaultSizeForInterfaceOrientation:(NSInteger)arg1;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })defaultFrameForInterfaceOrientation:(NSInteger)arg1;
+ (struct CGSize { float x1; float x2; })defaultSizeForOrientation:(NSInteger)arg1;
+ (id)automaticKeyboard;
+ (id)containerWindow;
+ (struct UIKeyboardAnimationGeometry { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; struct CGAffineTransform { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; float x_4_1_5; float x_4_1_6; } x4; })calculateAnimationGeometryForOrientation:(NSInteger)arg1;
+ (struct UIKeyboardAnimationGeometry { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; struct CGAffineTransform { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; float x_4_1_5; float x_4_1_6; } x4; })calculateAnimationGeometryForOrientation:(NSInteger)arg1 outDirection:(NSInteger)arg2;

- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithDefaultSize;
- (void)dealloc;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)updateLayout;
- (NSInteger)orientation;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)prepareForGeometryChange;
- (void)geometryChangeDone:(BOOL)arg1;
- (void)removeAutocorrectPrompt;
- (void)acceptAutocorrection;
- (void)setCaretBlinks:(BOOL)arg1;
- (void)setCaretVisible:(BOOL)arg1;
- (BOOL)returnKeyEnabled;
- (void)setReturnKeyEnabled:(BOOL)arg1;
- (id)defaultTextInputTraits;
- (void)setDefaultTextInputTraits:(id)arg1;
- (id)delegate;
- (void)clearSnapshot;
- (void)takeSnapshot;
- (void)activate;
- (void)deactivate;
- (void)movedFromSuperview:(id)arg1;
- (void)removeFromSuperview;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)mouseDown:(struct __GSEvent { }*)arg1;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (void)mouseDragged:(struct __GSEvent { }*)arg1;
- (NSInteger)textEffectsVisibilityLevel;
- (void)_setTypingEnabled:(BOOL)arg1;
- (BOOL)_typingEnabled;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)orderInWithAnimation:(BOOL)arg1;
- (void)orderInWithAnimation:(BOOL)arg1 fromDirection:(NSInteger)arg2 duration:(double)arg3;
- (void)orderOutWithAnimation:(BOOL)arg1;
- (void)orderOutWithAnimation:(BOOL)arg1 toDirection:(NSInteger)arg2 duration:(double)arg3;
- (void)keyboardAutomaticWillOrderIn:(id)arg1 context:(void*)arg2;
- (void)keyboardAutomaticOrderIn:(id)arg1 finished:(id)arg2;
- (void)keyboardAutomaticOrderOut:(id)arg1 finished:(id)arg2;

@end