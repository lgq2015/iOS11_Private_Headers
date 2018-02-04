/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebTextIterator : NSObject {
    WebTextIteratorPrivate * _private;
}

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

- (void)advance;
- (bool)atEnd;
- (id)currentNode;
- (id)currentRange;
- (id)currentText;
- (unsigned long long)currentTextLength;
- (const unsigned short*)currentTextPointer;
- (void)dealloc;
- (id)initWithRange:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI

+ (id)dd_iteratorForDocument:(id)arg1;

- (bool)dd_checkCurrentRangeAgainstString:(struct __CFString { }*)arg1;
- (id)dd_collectDDRangesForQuery:(struct __DDScanQuery { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __DDQueryFragment {} *x2; long long x3; long long x4; int (*x5)(); void *x6; }*)arg1 forResults:(id)arg2;
- (id)dd_doUrlificationForQuery:(struct __DDScanQuery { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __DDQueryFragment {} *x2; long long x3; long long x4; int (*x5)(); void *x6; }*)arg1 forResults:(id)arg2 referenceDate:(id)arg3 document:(id)arg4 DOMWasModified:(bool*)arg5 relevantResults:(id*)arg6 URLificationBlock:(id /* block */)arg7;
- (struct __DDScanQuery { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __DDQueryFragment {} *x2; long long x3; long long x4; int (*x5)(); void *x6; }*)dd_newQueryStopRange:(id*)arg1;

@end
