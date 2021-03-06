/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosDetailsAssetsSpec : PXFeatureSpec {
    PXWidgetSpec * __widgetSpec;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _contentGuideInsets;
    unsigned int  _detailsOptions;
    float  _editorialInterTileSpacing;
    int  _editorialNumberOfColumns;
    BOOL  _enableBadges;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _gridContentInsets;
    int  _gridContentMode;
    struct CGSize { 
        float width; 
        float height; 
    }  _gridInterItemSpacing;
    struct CGSize { 
        float width; 
        float height; 
    }  _gridItemSize;
    BOOL  _shouldShowTitle;
}

@property (nonatomic, readonly) PXWidgetSpec *_widgetSpec;
@property (nonatomic, readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } contentGuideInsets;
@property (nonatomic, readonly) unsigned int detailsOptions;
@property (nonatomic, readonly) float editorialInterTileSpacing;
@property (nonatomic, readonly) int editorialNumberOfColumns;
@property (nonatomic, readonly) BOOL enableBadges;
@property (nonatomic, readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } gridContentInsets;
@property (nonatomic, readonly) int gridContentMode;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } gridInterItemSpacing;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } gridItemSize;
@property (nonatomic, readonly) BOOL shouldShowTitle;

+ (struct CGSize { float x1; float x2; })bestItemSizeForAvailableWidth:(float)arg1 screenScale:(float)arg2 bestSpacing:(float*)arg3 bestInset:(float*)arg4;
+ (BOOL)shouldUsePhoneLayoutWithTraitCollection:(id)arg1;

- (void).cxx_destruct;
- (void)_computeEditorialWithExtendedTraitCollection:(id)arg1;
- (void)_computeGridWithExtendedTraitCollection:(id)arg1;
- (void)_computeSpecWithExtendedTraitCollection:(id)arg1;
- (id)_widgetSpec;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentGuideInsets;
- (float)defaultCornerRadius;
- (unsigned int)detailsOptions;
- (float)editorialInterTileSpacing;
- (int)editorialNumberOfColumns;
- (BOOL)enableBadges;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })gridContentInsets;
- (int)gridContentMode;
- (struct CGSize { float x1; float x2; })gridInterItemSpacing;
- (struct CGSize { float x1; float x2; })gridItemSize;
- (id)initWithExtendedTraitCollection:(id)arg1 detailsOptions:(unsigned int)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned int)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned int)arg2 detailsOptions:(unsigned int)arg3;
- (BOOL)shouldShowTitle;

@end
