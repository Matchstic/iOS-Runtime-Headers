/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class WLImage;

@interface WLCardPreviewImages : WLCardImages {
    WLImage *_iconImage;
}

@property(retain) WLImage * iconImage;

+ (id)archiveName;
+ (int)currentVersion;
+ (int)imageSet;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)iconImage;
- (id)initWithCardURL:(id)arg1 displayProfile:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)preheatImages;
- (void)setIconImage:(id)arg1;

@end