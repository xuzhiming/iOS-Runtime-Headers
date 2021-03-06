/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class NSString;

@interface ADSRVClientRecord : NSObject  {
    NSString *_bundleId;
    double _connectTime;
    double _disconnectTime;
    int _bannerCount;
}

@property(copy) NSString * bundleId;
@property double connectTime;
@property double disconnectTime;
@property int bannerCount;


- (void)dealloc;
- (void)setBannerCount:(int)arg1;
- (int)bannerCount;
- (void)setDisconnectTime:(double)arg1;
- (double)disconnectTime;
- (void)setConnectTime:(double)arg1;
- (double)connectTime;
- (void)setBundleId:(id)arg1;
- (id)bundleId;

@end
