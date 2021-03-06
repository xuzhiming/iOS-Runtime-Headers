/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureConnectionInternal, AVCaptureOutput, NSArray;

@interface AVCaptureConnection : NSObject  {
    AVCaptureConnectionInternal *_internal;
}

@property(readonly) NSArray * inputPorts;
@property(readonly) AVCaptureOutput * output;
@property(getter=isEnabled) BOOL enabled;
@property(getter=isActive,readonly) BOOL active;
@property(readonly) NSArray * audioChannels;
@property(getter=isVideoMirroringSupported,readonly) BOOL supportsVideoMirroring;
@property(getter=isVideoMirrored) BOOL videoMirrored;
@property(getter=isVideoOrientationSupported,readonly) BOOL supportsVideoOrientation;
@property int videoOrientation;
@property(getter=isVideoMinFrameDurationSupported,readonly) BOOL supportsVideoMinFrameDuration;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } videoMinFrameDuration;
@property(getter=isVideoMaxFrameDurationSupported,readonly) BOOL supportsVideoMaxFrameDuration;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } videoMaxFrameDuration;
@property(readonly) float videoMaxScaleAndCropFactor;
@property float videoScaleAndCropFactor;

+ (id)connectionWithInputPorts:(id)arg1 output:(id)arg2;

- (void)dealloc;
- (void)setVideoMotionFilterOverlapRatios:(struct CGSize { float x1; float x2; })arg1;
- (void)setVideoFirstAndLastFramesUncropped:(BOOL)arg1;
- (void)setVideoRetainedBufferCountHint:(int)arg1;
- (void)setVideoCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setVideoScaleAndCropFactor:(float)arg1;
- (BOOL)videoMaxFrameDurationIsSet;
- (void)setVideoMaxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (BOOL)videoMinFrameDurationIsSet;
- (void)setVideoMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (int)videoMaxFrameRate;
- (int)videoMinFrameRate;
- (void)setVideoOrientation:(int)arg1;
- (void)setVideoMirrored:(BOOL)arg1;
- (BOOL)isVideoMirrored;
- (void)removeInputPort:(id)arg1;
- (void)addInputPort:(id)arg1;
- (BOOL)isVideoMotionFilterOverlapRatiosSupported;
- (BOOL)isVideoFirstAndLastFramesUncroppedSupported;
- (BOOL)isVideoRetainedBufferCountHintSupported;
- (BOOL)isVideoCropRectSupported;
- (BOOL)isVideoMaxFrameDurationSupported;
- (BOOL)isVideoMinFrameDurationSupported;
- (BOOL)isVideoOrientationSupported;
- (BOOL)isVideoMirroringSupported;
- (void)updateAudioLevelsArray;
- (void)updateAudioChannelsArray;
- (void)inputPortFormatDescriptionChanged:(id)arg1;
- (BOOL)sourcesFromFrontFacingCamera;
- (id)initWithInputPorts:(id)arg1 output:(id)arg2;
- (struct CGSize { float x1; float x2; })videoMotionFilterOverlapRatios;
- (int)videoRetainedBufferCountHint;
- (BOOL)videoFirstAndLastFramesUncropped;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })videoCropRect;
- (float)videoScaleAndCropFactor;
- (float)videoMaxScaleAndCropFactor;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })videoMaxFrameDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })videoMinFrameDuration;
- (int)videoOrientation;
- (id)audioChannels;
- (id)inputPorts;
- (float)getPeakAudioLevelForChannel:(id)arg1;
- (float)getAvgAudioLevelForChannel:(id)arg1;
- (BOOL)isLive;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (BOOL)isActive;
- (void)setActive:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (void)invalidate;
- (id)mediaType;
- (id)output;

@end
