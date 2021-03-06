/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMULoadCommand : NSObject  {
    unsigned long long _cmdSize;
    unsigned int _command;
}

+ (id)loadCommandWithMemory:(id)arg1;

- (unsigned long long)cmdSize;
- (BOOL)isUUID;
- (BOOL)isSymTab;
- (BOOL)isLoadDyLib;
- (BOOL)isIDDyLib;
- (BOOL)isSegment;
- (BOOL)isSegment32;
- (BOOL)isSegment64;
- (BOOL)isDySymTab;
- (BOOL)isDyLinker;
- (id)initWithMemory:(id)arg1;

@end
