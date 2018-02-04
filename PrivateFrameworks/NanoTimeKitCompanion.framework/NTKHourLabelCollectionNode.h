/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKHourLabelCollectionNode : NTKLabelCollectionNode {
    NSArray * _valid;
}

@property (nonatomic, retain) NSArray *valid;

- (void).cxx_destruct;
- (id)createParentNodesForHours:(id)arg1 withPositions:(struct CGPoint { double x1; double x2; }*)arg2 validHours:(id)arg3;
- (void)createSubNodes;
- (void)setValid:(id)arg1;
- (id)valid;

@end
