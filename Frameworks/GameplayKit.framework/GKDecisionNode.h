/* made by EzioChiu
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKDecisionNode : NSObject {
    /* Warning: unhandled struct encoding: '{GKCDecisionNode={vector<std::__1::pair<id, GKCDecisionNode *>, std::__1::allocator<std::__1::pair<id, GKCDecisionNode *> > >=^{pair<id, GKCDecisionNode *>}^{pair<id, GKCDecisionNode *>}{__compressed_pair<std::__1::pair<id, GKCDecisionNode *> *, std::__1::allocator<std::__1::pair<id, GKCDecisionNode *> > >=^{pair<id, GKCDecisionNode *>}}}^{GKCDecisionNode}@@@@@}' */ struct GKCDecisionNode { struct vector<std::__1::pair<id, GKCDecisionNode *>, std::__1::allocator<std::__1::pair<id, GKCDecisionNode *> > > { struct pair<id, GKCDecisionNode *> {} *x_1_1_1; struct pair<id, GKCDecisionNode *> {} *x_1_1_2; struct __compressed_pair<std::__1::pair<id, GKCDecisionNode *> *, std::__1::allocator<std::__1::pair<id, GKCDecisionNode *> > > { struct pair<id, GKCDecisionNode *> {} *x_3_2_1; } x_1_1_3; } x1; struct GKCDecisionNode {} *x2; id x3; id x4; id x5; } * _node;
    GKDecisionTree * _tree;
}

- (void).cxx_destruct;
- (id)attribute;
- (id)branches;
- (id)createBranchWithPredicate:(id)arg1 attribute:(id)arg2;
- (id)createBranchWithValue:(id)arg1 attribute:(id)arg2;
- (id)createBranchWithWeight:(long long)arg1 attribute:(id)arg2;
- (id)createChildWithAttribute:(id)arg1 randomSource:(id)arg2 withBranch:(id)arg3;
- (void)dealloc;
- (id)description;
- (id)getNodeAtBranch:(id)arg1;
- (id)initWithNode:(/* Warning: unhandled struct encoding: '{GKCDecisionNode={vector<std::__1::pair<id, GKCDecisionNode *>, std::__1::allocator<std::__1::pair<id, GKCDecisionNode *> > >=^{pair<id, GKCDecisionNode *>}^{pair<id, GKCDecisionNode *>}{__compressed_pair<std::__1::pair<id, GKCDecisionNode *> *, std::__1::allocator<std::__1::pair<id, GKCDecisionNode *> > >=^{pair<id, GKCDecisionNode *>}}}^{GKCDecisionNode}@@@@@}' */ struct GKCDecisionNode { struct vector<std::__1::pair<id, GKCDecisionNode *>, std::__1::allocator<std::__1::pair<id, GKCDecisionNode *> > > { struct pair<id, GKCDecisionNode *> {} *x_1_1_1; struct pair<id, GKCDecisionNode *> {} *x_1_1_2; struct __compressed_pair<std::__1::pair<id, GKCDecisionNode *> *, std::__1::allocator<std::__1::pair<id, GKCDecisionNode *> > > { struct pair<id, GKCDecisionNode *> {} *x_3_2_1; } x_1_1_3; } x1; struct GKCDecisionNode {} *x2; id x3; id x4; id x5; }*)arg1 tree:(id)arg2;
- (void)setAttribute:(id)arg1;

@end
