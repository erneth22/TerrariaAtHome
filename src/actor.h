class Actor {
    public:
    Actor();
    ~Actor();
    float getPositionX();
    float getPositionY();
    private:
    float positionX{};
    float positionY{};
};