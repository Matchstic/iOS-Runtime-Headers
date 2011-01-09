/* Generated by RuntimeBrowser on iPhone OS 3.1
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLVideoView, NSData, UIView, PLCropOverlay, UIImage, PLCameraElapsedTimeView, PLCameraController, UIToolbar, NSDictionary, NSString, PLImageTile, MLPhotoDCFFileGroup, UIImageView, PLPreviewView;



@interface PLCameraView : UIView <PLCameraControllerDelegate, PLVideoViewDelegate>
{
    UIToolbar *_cameraButtonBar;
    NSInteger _availablePictureCount;
    NSInteger _captureOrientation;
    NSInteger _photoSavingOptions;
    BOOL _manipulatingCrop;
    NSDictionary *_videoMetadata;
    MLPhotoDCFFileGroup *_videoFileGroup;
    PLCameraController *_cameraController;
    PLCameraElapsedTimeView *_timeView;
    PLPreviewView *_previewView;
    UIView *_animatedCaptureView;
    float _bounceAspectRatio;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _bounceDestinationFrame;
    UIView *_irisView;
    UIView *_staticIrisView;
    UIImageView *_shadowView;
    UIImage *_previewWellImage;
    UIImage *_temporaryThumbnailImage;
    BOOL _irisIsClosed;
    SEL _openIrisAnimationFinishedSelector;
    SEL _closeIrisAnimationFinishedSelector;
    PLCropOverlay *_cropOverlay;
    PLImageTile *_imageTile;
    PLVideoView *_videoView;
    NSDictionary *_imagePickerOptions;
    id _delegate;
    NSInteger _enabledGestures;
    unsigned int _showsCropOverlay : 1;
    unsigned int _allowsEditing : 1;
    unsigned int _changesStatusBar : 1;
    unsigned int _cropOverlayUsesTelephonyUI : 1;
    unsigned int _showsCropRegion : 1;
    unsigned int _controlsAreVisible : 1;
    unsigned int _allowsMultipleModes : 1;
    unsigned int _capturePhotoWhenFocusFinished : 1;
    unsigned int _dontAnimateVideoPreviewDown : 1;
    unsigned int _processVideoAfterBounceAnimation : 1;
    unsigned int _capturingPhoto : 1;
    NSString *_cropTitle;
    NSString *_cropButtonTitle;
    NSData *_lastCapturedImageData;
    unsigned int _imagePickerWantsImageData : 1;
}

@property(readonly) BOOL isCameraReady;


- (void)_playShutterSound;
- (void)_updateStatusBar;
- (void)setManipulatingCrop:(BOOL)arg1;
- (void)cameraControllerReadyStateChanged:(id)arg1;
- (void)_checkDiskSpaceAfterCapture;
- (BOOL)_canEditVideo;
- (void)_previewVideoAtPath:(id)arg1;
- (void)_processCapturedVideo;
- (void)_videoCaptureCompleted:(id)arg1;
- (void)cameraController:(id)arg1 tookPicture:(id)arg2 withPreview:(id)arg3 jpegData:(struct __CFData { }*)arg4 imageProperties:(id)arg5;
- (void)_preparePreviewWellImage:(struct CGImage { }*)arg1 isVideo:(BOOL)arg2;
- (void)setupAnimateCameraPreviewDown:(id)arg1;
- (void)setupAnimateVideoPreviewDown:(void*)arg1;
- (void)animateCameraPreviewDown;
- (void)_animateFinalBounce;
- (void)_bounceAnimationFinished;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)_setShadowViewVisible:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)setEnabledGestures:(NSInteger)arg1;
- (void)setPhotoSavingOptions:(NSInteger)arg1;
- (NSInteger)photoSavingOptions;
- (void)_updateImageEditability;
- (void)setImagePickerOptions:(id)arg1;
- (void)setAllowsImageEditing:(BOOL)arg1;
- (void)setChangesStatusBar:(BOOL)arg1;
- (void)setShowsCropOverlay:(BOOL)arg1;
- (void)setCropOverlayUsesTelephonyUI:(BOOL)arg1;
- (void)setShowsCropRegion:(BOOL)arg1;
- (void)setCropTitle:(id)arg1 buttonTitle:(id)arg2;
- (void)setImagePickerWantsImageData:(BOOL)arg1;
- (void)setCameraButtonBar:(id)arg1;
- (id)buttonBar;
- (id)_bottomBar;
- (id)_modeSwitch;
- (id)_shutterButton;
- (void)setCameraMode:(NSInteger)arg1;
- (void)setAllowsMultipleCameraModes:(BOOL)arg1;
- (id)imageTile;
- (void)_inCallStatusChanged:(id)arg1;
- (void)_applicationResumed;
- (void)takePictureOpenIrisAnimationFinished;
- (void)takePictureCloseIrisAnimationFinished;
- (NSInteger)_getCaptureOrientation;
- (void)_shutterButtonClicked;
- (void)cameraControllerFocusFinished:(id)arg1;
- (void)timeLapseTimerFired;
- (id)_newVideoFileGroup;
- (void)_deleteVideoFileGroup;
- (void)cameraShutterClicked:(id)arg1;
- (void)_performVideoCapture;
- (void)_videoSwitchValueDidChange:(id)arg1;
- (void)cameraController:(id)arg1 modeDidChange:(NSInteger)arg2;
- (void)cameraControllerVideoCaptureDidStart:(id)arg1;
- (void)cameraControllerVideoCaptureDidStop:(id)arg1;
- (void)_simpleRemoteActionDidOccur:(id)arg1;
- (void)_updateModeSwitchVisibility;
- (id)_cropOverlay;
- (void)viewWillBeDisplayed;
- (void)startPreview;
- (void)viewDidAppear;
- (void)viewWillBeRemoved;
- (void)_removeVideoCaptureFileAtPath:(id)arg1;
- (void)cropOverlayWasCancelled:(id)arg1;
- (void)cropOverlayWasOKed:(id)arg1;
- (void)cropOverlayPlay:(id)arg1;
- (void)cropOverlayPause:(id)arg1;
- (void)cropOverlay:(id)arg1 didFinishSaving:(id)arg2;
- (BOOL)imageViewIsDisplayingLandscape:(id)arg1;
- (void)willStartGesture:(NSInteger)arg1 inView:(id)arg2 forEvent:(struct __GSEvent { }*)arg3;
- (void)tearDownIris;
- (void)primeStaticClosedIris;
- (void)showStaticClosedIris;
- (void)hideStaticClosedIris;
- (BOOL)irisIsClosed;
- (void)_closeIrisAnimationFinished;
- (void)closeIris:(BOOL)arg1 didFinishSelector:(SEL)arg2;
- (void)_openIrisAnimationFinished;
- (void)openIrisWithDidFinishSelector:(SEL)arg1;
- (void)openIrisAnimationFinished;
- (void)closeIrisAnimationFinished;
- (void)animateIrisForSuspension;
- (BOOL)videoViewShouldDisplayScrubber:(id)arg1;
- (BOOL)videoViewShouldDisplayOverlay:(id)arg1;
- (float)videoViewScrubberYOrigin:(id)arg1;
- (BOOL)videoViewCanBeginPlayback:(id)arg1;
- (void)videoViewIsReadyToBeginPlayback:(id)arg1;
- (void)videoViewDidBeginPlayback:(id)arg1;
- (void)videoViewDidPausePlayback:(id)arg1;
- (void)videoViewDidEndPlayback:(id)arg1 didFinish:(BOOL)arg2;
- (void)setControlsAreVisible:(BOOL)arg1;
- (BOOL)controlsAreVisible;
- (void)setPreviewViewTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (id)overlayView;
- (void)setOverlayView:(id)arg1;
- (void)pressShutterButton;
- (BOOL)isCameraReady;
- (id)_scriptingInfo;

@end