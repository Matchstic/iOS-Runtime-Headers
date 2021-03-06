/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFUserAuthenticationModelEducationalMode : NSObject <SBFUserAuthenticationModel> {
    <SBFUserAuthenticationModelDelegate> * _delegate;
    SBFMobileKeyBag * _keybag;
    BOOL  _pendingWipe;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBFUserAuthenticationModelDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (getter=isPermanentlyBlocked, nonatomic, readonly) BOOL permanentlyBlocked;
@property (readonly) Class superclass;
@property (getter=isTemporarilyBlocked, nonatomic, readonly) BOOL temporarilyBlocked;
@property (nonatomic, readonly) double timeUntilUnblockedSinceReferenceDate;

- (void).cxx_destruct;
- (id)_refreshStateAndNotify:(BOOL)arg1;
- (void)_refreshStateForMkbState:(id)arg1 notify:(BOOL)arg2;
- (id)delegate;
- (id)initWithKeyBag:(id)arg1;
- (BOOL)isPermanentlyBlocked;
- (BOOL)isTemporarilyBlocked;
- (void)noteNewMkbDeviceLockState:(id)arg1;
- (void)notePasscodeEntryBegan;
- (void)notePasscodeEntryCancelled;
- (void)notePasscodeUnlockFailedWithError:(id)arg1;
- (void)notePasscodeUnlockSucceeded;
- (void)performPasswordTest:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)synchronize;
- (double)timeUntilUnblockedSinceReferenceDate;

@end
