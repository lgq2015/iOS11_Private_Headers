/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGHtmlParserDissectorTask : NSObject {
    NSMutableArray * _activeRegionIndexSetStack;
    NSMutableArray * _activeRegionStartPositionStack;
    NSHashTable * _activeRegions;
    unsigned long long  _bytesConsumedInPreviousPasses;
    unsigned long long  _chunkLength;
    const char * _chunkStart;
    bool  _currentLineIsCollapsed;
    NSMutableString * _currentLineText;
    unsigned long long  _depth;
    NSMutableIndexSet * _depthsWithActiveRegions;
    struct _xmlParserCtxt { struct _xmlSAXHandler {} *x1; void *x2; struct _xmlDoc {} *x3; int x4; int x5; char *x6; char *x7; int x8; int x9; struct _xmlParserInput {} *x10; int x11; int x12; struct _xmlParserInput {} **x13; struct _xmlNode {} *x14; int x15; int x16; struct _xmlNode {} **x17; int x18; struct _xmlParserNodeInfoSeq { unsigned long long x_19_1_1; unsigned long long x_19_1_2; struct _xmlParserNodeInfo {} *x_19_1_3; } x19; int x20; int x21; int x22; int x23; int x24; int x25; struct _xmlValidCtxt { void *x_26_1_1; int (*x_26_1_2)(); int (*x_26_1_3)(); struct _xmlNode {} *x_26_1_4; int x_26_1_5; int x_26_1_6; struct _xmlNode {} **x_26_1_7; unsigned int x_26_1_8; struct _xmlDoc {} *x_26_1_9; int x_26_1_10; struct _xmlValidState {} *x_26_1_11; int x_26_1_12; int x_26_1_13; struct _xmlValidState {} *x_26_1_14; struct _xmlAutomata {} *x_26_1_15; struct _xmlAutomataState {} *x_26_1_16; } x26; int x27; int x28; char *x29; char *x30; int x31; int x32; char **x33; long long x34; long long x35; int x36; int x37; int x38; char *x39; char *x40; } * _parserContext;
    NSMutableArray * _plainTextLineToHTMLOffset;
    NSMutableArray * _plainTextLines;
    unsigned long long  _plainTextLinesTotalLength;
    bool  _preBlockDepth;
    unsigned long long  _quoteToEndFromPosition;
    NSMutableIndexSet * _quotedRegions;
    bool  _renderingSuspended;
    NSMutableIndexSet * _sigHtmlBlockRegions;
    NSMutableIndexSet * _tabularRegions;
}

- (void).cxx_destruct;
- (void)endPreBlock;
- (void)enterRegion:(id)arg1;
- (void)newBlock;
- (void)process:(id)arg1;
- (void)processCurrentLineOfText;
- (void)quoteToEnd;
- (void)resumeRendering;
- (void)startPreBlock;
- (void)startQuotedRegion;
- (void)startSigHtmlBlock;
- (void)startTable;
- (void)suspendRendering;
- (void)tagEnd;
- (void)tagStart;
- (void)textContent:(const char *)arg1 len:(int)arg2;
- (void)uncollapseCurrentLine;

@end
