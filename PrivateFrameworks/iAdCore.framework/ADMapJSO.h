/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class <ADJSODelegate>, MKMapView, WebScriptObject, NSMutableArray, NSLock, ADResourceDownloader, NSMutableSet, NSMutableDictionary;

@interface ADMapJSO : ADJavaScriptObject  {
    <ADJSODelegate> *_delegate;
    BOOL _privilegedClient;
    MKMapView *_mapView;
    struct { 
        double latitudeDelta; 
        double longitudeDelta; 
    } _deferredSpan;
    NSMutableDictionary *_mapAnnotations;
    NSMutableDictionary *_mapAnnotationImages;
    NSMutableArray *_deferredAnnotations;
    ADResourceDownloader *_imageDownloader;
    NSMutableSet *_downloadsInProgress;
    BOOL _hidden;
    BOOL _showsUserLocation;
    BOOL _observingUserLocation;
    BOOL _clientDidResignActive;
    BOOL _shouldShowUserLocationOnResume;
    NSLock *_lock;
    WebScriptObject *_listener;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _mapFrame;
    struct { 
        struct { 
            double latitude; 
            double longitude; 
        } center; 
        struct { 
            double latitudeDelta; 
            double longitudeDelta; 
        } span; 
    } _mapRegion;
}

@property struct { struct { double latitude; double longitude; } center; struct { double latitudeDelta; double longitudeDelta; } span; } mapRegion;
@property struct CGRect { struct CGPoint { float x; float y; } origin; struct CGSize { float width; float height; } size; } mapFrame;
@property(retain) WebScriptObject * listener;
@property(retain) NSLock * lock;
@property BOOL shouldShowUserLocationOnResume;
@property BOOL clientDidResignActive;
@property BOOL observingUserLocation;
@property BOOL showsUserLocation;
@property BOOL hidden;
@property(retain,readonly) NSMutableSet * downloadsInProgress;
@property(retain,readonly) ADResourceDownloader * imageDownloader;
@property(retain,readonly) NSMutableArray * deferredAnnotations;
@property(retain,readonly) NSMutableDictionary * mapAnnotationImages;
@property(retain,readonly) NSMutableDictionary * mapAnnotations;
@property struct { double latitudeDelta; double longitudeDelta; } deferredSpan;
@property(retain) MKMapView * mapView;
@property(getter=isPrivilegedClient) BOOL privilegedClient;
@property <ADJSODelegate> * delegate;

+ (void)initializeInContext:(struct OpaqueJSContext { }*)arg1;
+ (id)scriptingKeys;
+ (id)scriptSelectors;

- (BOOL)isPrivilegedClient;
- (id)deferredAnnotations;
- (id)downloadsInProgress;
- (BOOL)clientDidResignActive;
- (void)deny;
- (void)_mainThreadAddAnnotation:(id)arg1;
- (id)_annotationFromWebScriptObject:(id)arg1;
- (void)zoomToAnnotations:(BOOL)arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })mapRegion;
- (void)setMapRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })mapFrame;
- (void)setMapFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setLock:(id)arg1;
- (BOOL)shouldShowUserLocationOnResume;
- (void)setShouldShowUserLocationOnResume:(BOOL)arg1;
- (void)setClientDidResignActive:(BOOL)arg1;
- (BOOL)observingUserLocation;
- (void)setObservingUserLocation:(BOOL)arg1;
- (id)imageDownloader;
- (id)mapAnnotationImages;
- (id)mapAnnotations;
- (struct { double x1; double x2; })deferredSpan;
- (void)setDeferredSpan:(struct { double x1; double x2; })arg1;
- (void)clientApplicationDidBecomeActive;
- (void)setPrivilegedClient:(BOOL)arg1;
- (void)setListener:(id)arg1;
- (void)allow;
- (void)clientApplicationDidResignActive;
- (id)lock;
- (BOOL)hidden;
- (id)frame;
- (void)setFrame:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)setHidden:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)addAnnotation:(id)arg1;
- (BOOL)showsUserLocation;
- (void)setShowsUserLocation:(BOOL)arg1;
- (void)setRegion:(id)arg1;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (id)mapView;
- (void)setMapView:(id)arg1;
- (void)addAnnotations:(id)arg1;
- (void)removeAnnotation:(id)arg1;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (id)region;
- (id)listener;

@end