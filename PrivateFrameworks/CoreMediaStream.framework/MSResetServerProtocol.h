/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface MSResetServerProtocol : MSStreamsProtocol  {
    struct __MSRSPCContext { 
        struct __MSSPCContext { 
            void *owner; 
            struct __CFString {} *personID; 
            struct __CFString {} *authToken; 
            struct __CFDictionary {} *deviceInfo; 
            double connectionTimeout; 
            int (*__didReceiveDataCallback)(); 
            int (*__didFinishCallback)(); 
            int (*__didFailAuthenticationCallback)(); 
            int (*__didReceiveServerSideConfigVersionCallback)(); 
            int (*__didReceiveRetryAfterCallback)(); 
            struct CFURLConnectionClient_V1 {} *__client; 
            struct _CFURLConnection {} *__connection; 
            struct __CFData {} *__responseData; 
            struct __CFHTTPMessage {} *__response; 
            struct __CFError {} *__error; 
        } _super; 
        int (*finishedCallback)(); 
        int (*authFailedCallback)(); 
        int (*didReceiveServerSideConfigurationVersionCallback)(); 
    } _context;
}


- (void)dealloc;
- (void)resetServerState;
- (void)_coreProtocolDidFinishError:(id)arg1;
- (void)_coreProtocolDidFailAuthenticationError:(id)arg1;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
