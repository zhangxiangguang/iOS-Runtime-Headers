/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelLibrarySearchEntityResultContainer : NSObject {
    struct shared_ptr<mlcore::EntityQueryResult> { 
        struct EntityQueryResult {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _entityQueryResult;
    MPModelLibrarySearchScope * _scope;
}

@property (nonatomic, readonly) struct shared_ptr<mlcore::EntityQueryResult> { struct EntityQueryResult {} *x1; struct __shared_weak_count {} *x2; } entityQueryResult;
@property (nonatomic, readonly, copy) MPModelLibrarySearchScope *scope;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct shared_ptr<mlcore::EntityQueryResult> { struct EntityQueryResult {} *x1; struct __shared_weak_count {} *x2; })entityQueryResult;
- (id)initWithEntityQueryResult:(struct shared_ptr<mlcore::EntityQueryResult> { struct EntityQueryResult {} *x1; struct __shared_weak_count {} *x2; })arg1 forScope:(id)arg2;
- (id)scope;

@end