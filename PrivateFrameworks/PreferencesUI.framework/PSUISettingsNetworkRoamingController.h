/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUISettingsNetworkRoamingController : PSListController {
    PSSpecifier * _cdmaRoamingSpecifier;
    PSSpecifier * _dataRoamingSpecifier;
    PSSpecifier * _voiceRoamingSpecifier;
}

- (void).cxx_destruct;
- (id)_voiceRoamingFooterTextWithVoiceRoamingOn:(BOOL)arg1;
- (id)cdmaRoamingSpecifiers;
- (id)dataRoamingSpecifiers;
- (void)dealloc;
- (id)getCDMARoamingStatus:(id)arg1;
- (id)getDataRoamingStatus:(id)arg1;
- (id)getEUInternetStatus:(id)arg1;
- (id)getVoiceRoamingStatus:(id)arg1;
- (id)init;
- (void)newCarrierNotification;
- (void)reloadRoamingStatus;
- (void)roamingOptionsDidChange;
- (void)setCDMARoamingEnabled:(id)arg1 specifier:(id)arg2;
- (void)setDataRoamingEnabled:(id)arg1 specifier:(id)arg2;
- (void)setEUInternetEnabled:(id)arg1 specifier:(id)arg2;
- (void)setVoiceRoamingEnabled:(id)arg1 specifier:(id)arg2;
- (id)specifiers;

@end
