/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKNumeralsAnalogFaceView : NTKAnalogFaceView {
    BOOL  _areAllComplicationsOff;
    struct NSNumber { Class x1; } * _clockTimerToken;
    NTKUtilityComplicationFactory * _complicationFactory;
    BOOL  _complicationPositionNeedsUpdate;
    unsigned int  _faceColor;
    NTKNumeralsHourViewsManager * _hourViewsManager;
    unsigned int  _selectedStyle;
    NTKEditOptionPickerView * _stylePickerView;
    int  _utilitySlot;
}

+ (id)_swatchForEditModeDependsOnOptions:(int)arg1;
+ (id)_swatchImageForEditOption:(id)arg1 mode:(int)arg2 withSelectedOptions:(id)arg3;

- (void).cxx_destruct;
- (void)_applyBreathingFraction:(float)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (void)_applyDataMode;
- (void)_applyFaceColor:(unsigned int)arg1 toComplicationView:(id)arg2;
- (void)_applyForegroundAlphaForTransitionFraction:(float)arg1 fromEditMode:(int)arg2 toEditMode:(int)arg3;
- (void)_applyFrozen;
- (void)_applyOption:(id)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (void)_applyRubberBandingFraction:(float)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (void)_applyStyle:(unsigned int)arg1;
- (void)_applyTransitionFraction:(float)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(int)arg4 slot:(id)arg5;
- (void)_cleanupAfterStyleEditing;
- (int)_complicationPlacementForCurrentHour;
- (int)_complicationPlacementForHour:(int)arg1;
- (void)_configureComplicationFactory:(id)arg1;
- (void)_configureComplicationView:(id)arg1 forSlot:(id)arg2;
- (void)_configureForEditMode:(int)arg1;
- (void)_configureForStyleEditing;
- (void)_configureForTransitionFraction:(float)arg1 fromEditMode:(int)arg2 toEditMode:(int)arg3;
- (int)_currentHour;
- (void)_displayLinkFired;
- (void)_enumerateComplicationViewsWithBlock:(id /* block */)arg1;
- (id)_faceConfiguration;
- (id)_faceCurrentDate;
- (BOOL)_fadesComplicationSlot:(id)arg1 inEditMode:(int)arg2;
- (void)_handleTimeChange;
- (float)_handsAlphaForEditMode:(int)arg1;
- (BOOL)_isInTimeTravel;
- (float)_keylineCornerRadiusForComplicationSlot:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_keylineFrameForCustomEditMode:(int)arg1 slot:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_keylineFrameForFullScreenEditingReducedForOutsideLabel;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_keylineFrameForStyleEditing;
- (unsigned int)_keylineLabelAlignmentForComplicationSlot:(id)arg1;
- (unsigned int)_keylineLabelAlignmentForCustomEditMode:(int)arg1 slot:(id)arg2;
- (BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(int)arg1;
- (id)_keylineViewForCustomEditMode:(int)arg1 slot:(id)arg2;
- (int)_legacyLayoutOverrideforComplicationType:(unsigned int)arg1 slot:(id)arg2;
- (void)_loadHoursManagerIfNecessary;
- (void)_loadLayoutRules;
- (void)_loadSnapshotContentViews;
- (BOOL)_needComplicationAnimationForChangeToHour:(int)arg1;
- (BOOL)_needsForegroundContainerView;
- (id)_newLegacyViewForComplication:(id)arg1 family:(int)arg2 slot:(id)arg3;
- (void)_prepareForHourChangeWithSecondsUntilChange:(float)arg1;
- (void)_prepareForStatusChange:(BOOL)arg1;
- (void)_scrubToDate:(id)arg1 animated:(BOOL)arg2;
- (float)_secondHandAlphaForEditMode:(int)arg1;
- (int)_styleIndexForStyle:(unsigned int)arg1;
- (struct CGPoint { float x1; float x2; })_timeTravelStatusModuleCenter;
- (BOOL)_timeViewBehindContentForEditMode:(int)arg1;
- (void)_unloadSnapshotContentViews;
- (void)_updateAreAllComplicationsOffState;
- (void)_updateComplicationAndHourNodePlacementsWithToHour:(int)arg1 duration:(float)arg2;
- (void)_updateComplicationPositionWithAnimationProgress:(float)arg1;
- (void)dealloc;
- (void)endScrubbingAnimated:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;

@end
