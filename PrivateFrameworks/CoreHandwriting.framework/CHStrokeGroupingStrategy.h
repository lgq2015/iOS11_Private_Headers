/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHStrokeGroupingStrategy : NSObject {
    NSArray * _locales;
    CHRecognitionSessionResult * _sessionLastResult;
    <CHStrokeProvider> * _strokeProvider;
}

@property (nonatomic, readonly, retain) NSArray *locales;
@property (nonatomic, readonly, retain) CHRecognitionSessionResult *sessionLastResult;
@property (nonatomic, readonly, retain) <CHStrokeProvider> *strokeProvider;

+ (bool)_isPointEnumerationSupportedForStroke:(id)arg1;
+ (void)enumeratePointsForStroke:(id)arg1 interpolationType:(long long)arg2 resolution:(long long)arg3 usingBlock:(id /* block */)arg4;

- (void)dealloc;
- (void)getAddedStrokes:(id*)arg1 removedStrokeIdentifiers:(id*)arg2;
- (void)getFirstStrokeIdentifier:(id*)arg1 lastStrokeIdentifier:(id*)arg2 inGroup:(id)arg3 addingStrokeIdentifiers:(id)arg4 removingStrokeIdentifiers:(id)arg5;
- (id)initWithStrokeProvider:(id)arg1 sessionLastResult:(id)arg2 locales:(id)arg3;
- (id)locales;
- (id)recognizableDrawingForStrokeGroup:(id)arg1 orderedStrokesIDs:(id*)arg2;
- (id)sessionLastResult;
- (id)strokeGroupFromGroup:(id)arg1 addingStrokes:(id)arg2;
- (id)strokeProvider;
- (id)strokesForIdentifiers:(id)arg1;
- (id)updatedGroupingResultWithCancellationBlock:(id /* block */)arg1;

@end
