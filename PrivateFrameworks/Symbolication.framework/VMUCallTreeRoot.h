/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUCallTreeRoot : VMUCallTreeNode {
    NSMapTable * _addressToLeafSymbolNameMap;
    NSMapTable * _addressToSymbolNameMap;
    NSArray * _binaryImages;
    NSString * _binaryImagesDescription;
    unsigned long long  _options;
    VMUSampler * _sampler;
    <VMUStackLogReader> * _stackLogReader;
    struct _CSTypeRef { 
        unsigned long long _opaque_1; 
        unsigned long long _opaque_2; 
    }  _symbolicator;
    NSMapTable * _threadPortToNameMap;
    NSMutableSet * _uniqueNodeNames;
}

- (void).cxx_destruct;
- (id)addBacktrace:(id)arg1;
- (id)addBacktrace:(id)arg1 count:(unsigned int)arg2 numBytes:(unsigned long long)arg3;
- (id)addChildWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned int)arg3 numBytes:(unsigned long long)arg4 toNode:(id)arg5;
- (id)addUniqueChildWithName:(id)arg1 address:(unsigned long long)arg2 count:(unsigned int)arg3 numBytes:(unsigned long long)arg4 toNode:(id)arg5;
- (void)allBacktracesHaveBeenAdded;
- (id)chargeSystemLibrariesToCallersAndKeepBoundaries:(bool)arg1;
- (void)dealloc;
- (id)descriptionStringForAddress:(unsigned long long)arg1 atTime:(unsigned long long)arg2 leafFrame:(bool)arg3 startOfRecursion:(bool)arg4;
- (id)initWithCallGraphFile:(id)arg1 fileHeader:(id*)arg2 topFunctionsList:(id*)arg3 binaryImagesList:(id*)arg4;
- (id)initWithSymbolicator:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg1 sampler:(id)arg2 options:(unsigned long long)arg3;
- (void)setStackLogReader:(id)arg1;

@end
