/* made by EzioChiu.
 */

@protocol TSKCOTransforming

@required

- (TSKCOAbstractOperation<TSKCOTransforming> *)transformDynamicByAnyOperation:(TSKCOAbstractOperation<TSKCOTransforming> *)arg1 byHigherPriority:(bool)arg2;
- (TSKCOIdPlacementBaseOperation *)transformIdPlacementBaseOperation:(TSKCOIdPlacementBaseOperation *)arg1 isHigherPriority:(bool)arg2;
- (TSKCOReplaceRangeOperation *)transformReplaceRangeOperation:(TSKCOReplaceRangeOperation *)arg1 isHigherPriority:(bool)arg2;
- (TSKCOUpdateIdOperation *)transformUpdateIdOperation:(TSKCOUpdateIdOperation *)arg1 isHigherPriority:(bool)arg2;
- (TSKCOUpdateRangeOperation *)transformUpdateRangeOperation:(TSKCOUpdateRangeOperation *)arg1 isHigherPriority:(bool)arg2;

@end
