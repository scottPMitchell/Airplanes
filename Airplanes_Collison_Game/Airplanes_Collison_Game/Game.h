/// <summary>
/// author Pete Lowe May 2019
/// you need to change the above line or lose marks
/// </summary>
#ifndef GAME_HPP
#define GAME_HPP
/// <summary>
/// include guards used so we don't process this file twice
/// same as #pragma once
/// Don't forget the endif at the bottom
/// </summary>
#include <SFML/Graphics.hpp>

const int WIDTH = 1000;
const int HEIGHT = 800;

class Game
{
public:
	Game();
	~Game();
	/// <summary>
	/// main method for game
	/// </summary>
	void run();

private:

	void processEvents();
	void processKeys(sf::Event t_event);
	void processMousePrss(sf::Event t_event);
	void update(sf::Time t_deltaTime);
	void render();
	
	void setupFontAndText();
	void setupSprite();

	void move();

	sf::RenderWindow m_window; // main SFML window

	sf::Font m_ArialBlackfont; // font used by message
	sf::Text m_welcomeMessage; // text used for message on screen

	sf::Texture m_bigPlaneTexture; // texture used for larger plane
	sf::Sprite  m_bigPlaneSprite; // Sprite used for larger plane

	sf::Vector2f m_bigPlaneLocation{ 300.0f,180.0f }; // location of large plane 
	sf::Vector2f m_bigPlaneVelocity{ 1.0f, -1.0f }; // velocity of large plane
	sf::Vector2f m_firstClick{ 0.0f,0.0f };

	bool m_exitGame; // control exiting game

};

#endif // !GAME_HPP

