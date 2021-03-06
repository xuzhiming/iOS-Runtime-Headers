/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class NSNumber;

@interface CBConcreteService : CBService  {
    NSNumber *_startHandle;
    NSNumber *_endHandle;
}

@property(readonly) NSNumber * endHandle;
@property(readonly) NSNumber * startHandle;


- (void)dealloc;
- (id)startHandle;
- (id)endHandle;
- (id)initWithPeripheral:(id)arg1 UUID:(id)arg2 startHandle:(id)arg3 endHandle:(id)arg4;
- (id)handleIncludedServicesDiscovered:(id)arg1;
- (id)handleCharacteristicsDiscovered:(id)arg1;
- (void)handlePeripheralDisconnection;

@end
