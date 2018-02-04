/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXComponentDependencyResolver : NSObject {
    NSMutableArray * _componentNodes;
    NSDictionary * _mappedComponentNodes;
    NSArray * _solvedComponentNodes;
}

@property (nonatomic, readonly) NSMutableArray *componentNodes;
@property (nonatomic, readonly) NSDictionary *mappedComponentNodes;
@property (nonatomic, readonly) NSArray *solvedComponentNodes;

- (void).cxx_destruct;
- (void)addComponentNode:(id)arg1;
- (void)addDependency:(id)arg1;
- (id)componentNodeForComponentIdentifier:(id)arg1 andAttribute:(long long)arg2;
- (id)componentNodes;
- (id)componentNodesDependentOnComponentNode:(id)arg1;
- (id)createComponentNodesForComponentIdentifiers:(id)arg1;
- (id)debugDescription;
- (id)initWithComponentIdentifiers:(id)arg1;
- (id)mappedComponentNodes;
- (void)reset;
- (void)resolveStack:(id)arg1 withSolvedNodes:(id)arg2;
- (id)solvableOrder;
- (id)solvedComponentNodes;
- (id)solvedOrderForComponentNodes:(id)arg1;

@end
