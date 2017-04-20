/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

@interface WGMajorListViewController : WGWidgetListViewController <WGWidgetListFooterViewDelegate> {
    WGCollapsingView * _collapsingView;
    WGWidgetListFooterView * _footerView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) WGWidgetListFooterView *footerView;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureStackView;
- (id)_group;
- (id)_repopulateStackViewWithWidgetIdentifiers:(id)arg1 forColumnMode:(int)arg2;
- (id)footerView;
- (void)orderOfVisibleWidgetsDidChange:(id)arg1;
- (void)presentEditView:(id)arg1;
- (void)setShouldBlurContent:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;
- (id)visibleWidgetIdentifiersForColumnMode:(int)arg1;
- (void)widgetDiscoveryController:(id)arg1 widgetWithIdentifier:(id)arg2 shouldBecomeHiddenInGroup:(id)arg3;
- (void)widgetDiscoveryController:(id)arg1 widgetWithIdentifier:(id)arg2 shouldBecomeVisibleInGroup:(id)arg3;
- (id)widgetListFooterView:(id)arg1 customBackgroundViewForItem:(id)arg2;
- (void)widgetListFooterViewAvailableNewWidgetsUpdated:(id)arg1;

@end