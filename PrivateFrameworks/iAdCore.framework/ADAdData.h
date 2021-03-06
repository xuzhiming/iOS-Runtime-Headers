/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class NSMutableArray, NSString, NSData;

@interface ADAdData : PBCodable  {
    NSString *_bannerURL;
    NSString *_bannerWebArchiveURL;
    NSString *_uniqueIdentifier;
    NSData *_impressionIdentifierData;
    NSString *_humanReadableName;
    int _impressionCount;
    BOOL _hasExpirationDate;
    unsigned long long _expirationDate;
    NSMutableArray *_trackingURLs;
    NSString *_trackingURLSubstitutionParameter;
    NSString *_qToken;
    BOOL _hasTransitionType;
    int _transitionType;
    BOOL _hasAction;
    int _action;
    NSString *_storyboardURL;
    NSString *_storyboardWebArchiveURL;
    BOOL _hasUnbranded;
    BOOL _unbranded;
    NSString *_accessibilityDescription;
    BOOL _hasSuppressesPermissionToExitDialog;
    BOOL _suppressesPermissionToExitDialog;
    NSString *_titleForExitDialog;
    NSString *_messageForExitDialog;
    NSString *_cancelLabelForExitDialog;
    NSString *_continueLabelForExitDialog;
    BOOL _hasConfirmedClickTimeInterval;
    float _confirmedClickTimeInterval;
    BOOL _hasAdManagesPurchaseFlow;
    BOOL _adManagesPurchaseFlow;
    BOOL _hasAllowedToUseWebGL;
    BOOL _allowedToUseWebGL;
    NSMutableArray *_parameters;
    BOOL _hasInitialStoryboardOrientation;
    int _initialStoryboardOrientation;
    BOOL _hasSupportedStoryboardOrientations;
    int _supportedStoryboardOrientations;
    BOOL _hasScrolling;
    BOOL _scrolling;
    BOOL _hasBackgroundColor;
    unsigned int _backgroundColor;
    NSString *_titleForPurchaseDialog;
    NSString *_messageForPurchaseDialog;
    NSString *_cancelButtonForPurchaseDialog;
    NSString *_okButtonForPurchaseDialog;
}

@property(readonly) BOOL hasBannerURL;
@property(retain) NSString * bannerURL;
@property(readonly) BOOL hasBannerWebArchiveURL;
@property(retain) NSString * bannerWebArchiveURL;
@property(readonly) BOOL hasUniqueIdentifier;
@property(retain) NSString * uniqueIdentifier;
@property(readonly) BOOL hasImpressionIdentifierData;
@property(retain) NSData * impressionIdentifierData;
@property(readonly) BOOL hasHumanReadableName;
@property(retain) NSString * humanReadableName;
@property int impressionCount;
@property BOOL hasExpirationDate;
@property unsigned long long expirationDate;
@property(retain) NSMutableArray * trackingURLs;
@property(readonly) BOOL hasTrackingURLSubstitutionParameter;
@property(retain) NSString * trackingURLSubstitutionParameter;
@property(readonly) BOOL hasQToken;
@property(retain) NSString * qToken;
@property BOOL hasTransitionType;
@property int transitionType;
@property BOOL hasAction;
@property int action;
@property(readonly) BOOL hasStoryboardURL;
@property(retain) NSString * storyboardURL;
@property(readonly) BOOL hasStoryboardWebArchiveURL;
@property(retain) NSString * storyboardWebArchiveURL;
@property BOOL hasUnbranded;
@property BOOL unbranded;
@property(readonly) BOOL hasAccessibilityDescription;
@property(retain) NSString * accessibilityDescription;
@property BOOL hasSuppressesPermissionToExitDialog;
@property BOOL suppressesPermissionToExitDialog;
@property(readonly) BOOL hasTitleForExitDialog;
@property(retain) NSString * titleForExitDialog;
@property(readonly) BOOL hasMessageForExitDialog;
@property(retain) NSString * messageForExitDialog;
@property(readonly) BOOL hasCancelLabelForExitDialog;
@property(retain) NSString * cancelLabelForExitDialog;
@property(readonly) BOOL hasContinueLabelForExitDialog;
@property(retain) NSString * continueLabelForExitDialog;
@property BOOL hasConfirmedClickTimeInterval;
@property float confirmedClickTimeInterval;
@property BOOL hasAdManagesPurchaseFlow;
@property BOOL adManagesPurchaseFlow;
@property BOOL hasAllowedToUseWebGL;
@property BOOL allowedToUseWebGL;
@property(retain) NSMutableArray * parameters;
@property BOOL hasInitialStoryboardOrientation;
@property int initialStoryboardOrientation;
@property BOOL hasSupportedStoryboardOrientations;
@property int supportedStoryboardOrientations;
@property BOOL hasScrolling;
@property BOOL scrolling;
@property BOOL hasBackgroundColor;
@property unsigned int backgroundColor;
@property(readonly) BOOL hasTitleForPurchaseDialog;
@property(retain) NSString * titleForPurchaseDialog;
@property(readonly) BOOL hasMessageForPurchaseDialog;
@property(retain) NSString * messageForPurchaseDialog;
@property(readonly) BOOL hasCancelButtonForPurchaseDialog;
@property(retain) NSString * cancelButtonForPurchaseDialog;
@property(readonly) BOOL hasOkButtonForPurchaseDialog;
@property(retain) NSString * okButtonForPurchaseDialog;

+ (void)initialize;
+ (id)adDataForLocalAd:(id)arg1 creative:(id)arg2 urlRoot:(id)arg3;

- (id)humanReadableName;
- (id)description;
- (int)action;
- (void)dealloc;
- (void)setExpirationDate:(unsigned long long)arg1;
- (void)setParameters:(id)arg1;
- (id)parameters;
- (unsigned long long)expirationDate;
- (BOOL)hasAction;
- (void)setHasAction:(BOOL)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)dictionaryRepresentation;
- (id)uniqueIdentifier;
- (void)setAction:(int)arg1;
- (unsigned int)backgroundColor;
- (void)setBackgroundColor:(unsigned int)arg1;
- (BOOL)scrolling;
- (void)setScrolling:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setHasBackgroundColor:(BOOL)arg1;
- (void)setHasScrolling:(BOOL)arg1;
- (void)setHasSupportedStoryboardOrientations:(BOOL)arg1;
- (void)setHasInitialStoryboardOrientation:(BOOL)arg1;
- (void)setHasAllowedToUseWebGL:(BOOL)arg1;
- (void)setHasAdManagesPurchaseFlow:(BOOL)arg1;
- (void)setHasConfirmedClickTimeInterval:(BOOL)arg1;
- (void)setHasSuppressesPermissionToExitDialog:(BOOL)arg1;
- (void)setHasUnbranded:(BOOL)arg1;
- (void)setHasTransitionType:(BOOL)arg1;
- (void)setHasExpirationDate:(BOOL)arg1;
- (id)parametersAtIndex:(unsigned int)arg1;
- (void)clearParameters;
- (unsigned int)parametersCount;
- (BOOL)hasStoryboardURL;
- (id)trackingURLAtIndex:(unsigned int)arg1;
- (void)clearTrackingURLs;
- (BOOL)hasBannerWebArchiveURL;
- (BOOL)hasBannerURL;
- (void)addParameters:(id)arg1;
- (void)setConfirmedClickTimeInterval:(float)arg1;
- (void)addTrackingURL:(id)arg1;
- (void)setOkButtonForPurchaseDialog:(id)arg1;
- (void)setCancelButtonForPurchaseDialog:(id)arg1;
- (void)setMessageForPurchaseDialog:(id)arg1;
- (void)setTitleForPurchaseDialog:(id)arg1;
- (void)setContinueLabelForExitDialog:(id)arg1;
- (void)setCancelLabelForExitDialog:(id)arg1;
- (void)setMessageForExitDialog:(id)arg1;
- (void)setTitleForExitDialog:(id)arg1;
- (void)setQToken:(id)arg1;
- (void)setTrackingURLSubstitutionParameter:(id)arg1;
- (void)setTrackingURLs:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setAccessibilityDescription:(id)arg1;
- (void)setBannerWebArchiveURL:(id)arg1;
- (void)setBannerURL:(id)arg1;
- (void)setTransitionType:(int)arg1;
- (void)setAdManagesPurchaseFlow:(BOOL)arg1;
- (void)setImpressionCount:(int)arg1;
- (void)setSuppressesPermissionToExitDialog:(BOOL)arg1;
- (void)setUnbranded:(BOOL)arg1;
- (void)setAllowedToUseWebGL:(BOOL)arg1;
- (void)setStoryboardWebArchiveURL:(id)arg1;
- (void)setStoryboardURL:(id)arg1;
- (void)setHumanReadableName:(id)arg1;
- (void)setSupportedStoryboardOrientations:(int)arg1;
- (void)setInitialStoryboardOrientation:(int)arg1;
- (BOOL)hasHumanReadableName;
- (BOOL)hasUniqueIdentifier;
- (id)storyboardWebArchiveURL;
- (BOOL)hasStoryboardWebArchiveURL;
- (BOOL)hasBackgroundColor;
- (BOOL)hasScrolling;
- (int)supportedStoryboardOrientations;
- (BOOL)hasSupportedStoryboardOrientations;
- (int)initialStoryboardOrientation;
- (BOOL)hasInitialStoryboardOrientation;
- (int)transitionType;
- (BOOL)hasTransitionType;
- (id)okButtonForPurchaseDialog;
- (BOOL)hasOkButtonForPurchaseDialog;
- (id)cancelButtonForPurchaseDialog;
- (BOOL)hasCancelButtonForPurchaseDialog;
- (id)messageForPurchaseDialog;
- (BOOL)hasMessageForPurchaseDialog;
- (id)titleForPurchaseDialog;
- (BOOL)hasTitleForPurchaseDialog;
- (BOOL)adManagesPurchaseFlow;
- (BOOL)hasAdManagesPurchaseFlow;
- (float)confirmedClickTimeInterval;
- (BOOL)hasConfirmedClickTimeInterval;
- (BOOL)hasSuppressesPermissionToExitDialog;
- (id)accessibilityDescription;
- (BOOL)hasAccessibilityDescription;
- (BOOL)allowedToUseWebGL;
- (BOOL)hasAllowedToUseWebGL;
- (BOOL)unbranded;
- (BOOL)hasUnbranded;
- (id)qToken;
- (BOOL)hasQToken;
- (BOOL)hasExpirationDate;
- (id)bannerWebArchiveURL;
- (id)bannerURL;
- (int)impressionCount;
- (id)trackingURLSubstitutionParameter;
- (BOOL)hasTrackingURLSubstitutionParameter;
- (id)trackingURLs;
- (unsigned int)trackingURLsCount;
- (id)storyboardURL;
- (BOOL)hasImpressionIdentifierData;
- (void)setImpressionIdentifierData:(id)arg1;
- (id)impressionIdentifierData;
- (id)continueLabelForExitDialog;
- (BOOL)hasContinueLabelForExitDialog;
- (id)cancelLabelForExitDialog;
- (BOOL)hasCancelLabelForExitDialog;
- (id)messageForExitDialog;
- (BOOL)hasMessageForExitDialog;
- (id)titleForExitDialog;
- (BOOL)hasTitleForExitDialog;
- (BOOL)suppressesPermissionToExitDialog;

@end
