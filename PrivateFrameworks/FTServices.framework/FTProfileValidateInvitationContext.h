/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSString, NSDictionary;

@interface FTProfileValidateInvitationContext : FTProfileMessage <NSCopying> {
    NSString *_basePhoneNumber;
    NSString *_regionID;
    NSString *_responseBasePhoneNumber;
    NSString *_responseRegionID;
    NSDictionary *_responseExtraInfo;
}

@property(copy) NSString * regionID;
@property(copy) NSString * basePhoneNumber;
@property(copy) NSString * responseRegionID;
@property(copy) NSString * responseBasePhoneNumber;
@property(copy) NSDictionary * responseExtraInfo;


- (id)messageBody;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)setResponseExtraInfo:(id)arg1;
- (void)setResponseRegionID:(id)arg1;
- (void)setResponseBasePhoneNumber:(id)arg1;
- (void)handleResponseDictionary:(id)arg1;
- (id)requiredKeys;
- (id)basePhoneNumber;
- (id)regionID;
- (id)bagKey;
- (void)setBasePhoneNumber:(id)arg1;
- (id)responseExtraInfo;
- (id)responseBasePhoneNumber;
- (id)responseRegionID;
- (void)setRegionID:(id)arg1;

@end
