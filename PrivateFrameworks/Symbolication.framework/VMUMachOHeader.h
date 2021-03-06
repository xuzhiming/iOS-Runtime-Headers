/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSArray, NSString, <VMUMemory>, NSDate;

@interface VMUMachOHeader : VMUHeader  {
    NSString *_name;
    NSString *_path;
    NSString *_dsymPath;
    NSDate *_timestamp;
    <VMUMemory> *_memory;
    unsigned long long _address;
    unsigned long long _linkEditBase;
    NSArray *_loadCommands;
    long long _vmaddrSlide;
    unsigned int _fileType;
    unsigned int _flags;
}


- (void)setName:(id)arg1;
- (id)description;
- (void)dealloc;
- (unsigned long long)address;
- (id)regions;
- (id)dsymPath;
- (void)setDsymPath:(id)arg1;
- (id)loadCommands;
- (id)dySymbolTable;
- (id)commpage;
- (BOOL)isProtected;
- (unsigned int)compatibilityVersion;
- (id)segmentAddresses;
- (BOOL)isCommpage;
- (id)dyLinkerPath;
- (BOOL)isFromSharedCache;
- (id)segmentNamed:(id)arg1;
- (id)memory;
- (id)symbolTable;
- (unsigned long long)linkEditBase;
- (long long)vmaddrSlide;
- (id)architecture;
- (BOOL)isMachO;
- (unsigned int)fileType;
- (id)sections;
- (void)setPath:(id)arg1;
- (unsigned int)flags;
- (id)path;
- (id)timestamp;
- (id)name;
- (void)setTimestamp:(id)arg1;
- (unsigned int)currentVersion;
- (id)signature;
- (id)uuid;

@end
